
void FUN_01ff8000(undefined4 param_1)

{
  DAT_020a0c9c = DAT_020a0e18;
  DAT_020a0e18 = DAT_020a1060;
  DAT_020a10a0 = param_1;
  FUN_02015b68();
  (*DAT_020a0e18)();
  FUN_02015af4(param_1);
  DAT_020a0e18 = (code *)DAT_020a0c9c;
  return;
}

