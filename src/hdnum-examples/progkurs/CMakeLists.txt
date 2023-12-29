set(progkurs_sources
  ausgabe
  classes
  eingabe
  funktion
  gaussseidel
  hallohdnum
  matrizen2
  mehrzahlen
  operationen
  pendel
  pendelmitfunktion
  pendelmitfunktionstemplate
  pendelmittimer
  pendelnumerisch
  pendelwhile
  string
  vektoren2
  whitespace
  zahlen
)

foreach(loopVAR IN LISTS progkurs_sources)
    add_executable(${loopVAR} ${loopVAR}.cc)
endforeach()