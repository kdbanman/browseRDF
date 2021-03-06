ADD_CUSTOM_TARGET(dev_images ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/images ${CMAKE_CURRENT_BINARY_DIR}/images)

ADD_CUSTOM_TARGET(dev_html java -cp "${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon653.jar:${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon.jar:${PROJECT_SOURCE_DIR}/docs/common:${PROJECT_SOURCE_DIR}/thirdparty/xml-commons/resolver.jar" com.icl.saxon.StyleSheet -x org.apache.xml.resolver.tools.ResolvingXMLReader -y org.apache.xml.resolver.tools.ResolvingXMLReader -r org.apache.xml.resolver.tools.CatalogResolver -u ${PROJECT_SOURCE_DIR}/docs/developerHandbook/index.docbook ${PROJECT_SOURCE_DIR}/docs/common/tulip-html.xsl)

ADD_DEPENDENCIES(dev_html dev_images)

ADD_CUSTOM_TARGET(dev_toc java -cp "${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon653.jar:${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon.jar:${PROJECT_SOURCE_DIR}/docs/common:${PROJECT_SOURCE_DIR}/thirdparty/xml-commons/resolver.jar" com.icl.saxon.StyleSheet -x org.apache.xml.resolver.tools.ResolvingXMLReader -y org.apache.xml.resolver.tools.ResolvingXMLReader -r org.apache.xml.resolver.tools.CatalogResolver -o toc.dcf ${PROJECT_SOURCE_DIR}/docs/developerHandbook/index.docbook ${PROJECT_SOURCE_DIR}/docs/common/tulip-toc.xsl install.path="./developerHandbook/html/")

ADD_DEPENDENCIES(dev_toc dev_html) 

ADD_CUSTOM_TARGET(dev_keywords java -cp "${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon653.jar:${PROJECT_SOURCE_DIR}/thirdparty/saxon/saxon.jar:${PROJECT_SOURCE_DIR}/docs/common:${PROJECT_SOURCE_DIR}/thirdparty/xml-commons/resolver.jar" com.icl.saxon.StyleSheet -x org.apache.xml.resolver.tools.ResolvingXMLReader -y org.apache.xml.resolver.tools.ResolvingXMLReader -r org.apache.xml.resolver.tools.CatalogResolver -o keywords.dcf ${PROJECT_SOURCE_DIR}/docs/developerHandbook/index.docbook ${PROJECT_SOURCE_DIR}/docs/common/tulip-keywords.xsl install.path="./developerHandbook/html/")

ADD_DEPENDENCIES(dev_keywords dev_html)

INSTALL(DIRECTORY
 ${CMAKE_CURRENT_BINARY_DIR}/html
 ${CMAKE_CURRENT_BINARY_DIR}/images
DESTINATION share/doc/tulip/developerHandbook
COMPONENT tulip_doc)
