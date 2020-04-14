TEMPLATE = subdirs
SUBDIRS = \
          signALib\
          signAProtocol\
          signACommonUI\
          signAServe\
          signAProcess\
          signAChart\
          signACoreFun\
          signAPlugin/FunPlugin \
          signAPlugin/TextImport \
          signAPlugin/DsfFileImport \
          SARibbonBar/SARibbon/src/SARibbonBar \
          signADataProc\
          signA


TRANSLATIONS+= \
            translations/zh.ts\#chinese
            translations/en.ts #English

