FILE(REMOVE_RECURSE
  "CMakeFiles/doc_generation"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/doc_generation.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
