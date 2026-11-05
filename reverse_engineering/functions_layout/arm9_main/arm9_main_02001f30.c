
void FUN_02001f30(undefined4 param_1)

{
  if (DAT_020a06ec == 0) {
    FUN_0200ee94();
    if (DAT_020a06e4 != (code *)0x0) {
      (*DAT_020a06e4)();
      DAT_020a06e4 = (code *)0x0;
    }
  }
  FUN_02001f5c(param_1);
  return;
}

