
void FUN_02014498(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["Debug.Log"] */
  if (DAT_020a0cbc != 0) {
    return;
  }
  DAT_020a0cbc = param_1;
  iVar1 = FUN_0201a228(0x40);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_02014210(iVar1,8);
  }
  DAT_020a0fe0 = 0x60;
  DAT_020a0f9c = 0x40;
  DAT_020a0f4c = uVar2;
  if (DAT_020aa0f4 == '\0') {
    FUN_02004b18(&DAT_020aa0f4,s_Debug_Log_0209d930);
  }
  DAT_020a0c39 = 0;
  DAT_020a0db8 = 0;
  return;
}

