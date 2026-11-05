
void FUN_0216656c(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    if (param_2 == (char *)(DAT_0216e844 + 0x794)) {
      iVar1 = (uint)DAT_0216aefa * (uint)DAT_0216aef8 * 0x20;
      DC_FlushRange(*(undefined4 *)(DAT_0216e844 + 0x748),iVar1);
      FUN_02066b08(*(undefined4 *)(DAT_0216e844 + 0x748),(uint)DAT_0216aef4 << 5,iVar1);
    }
    else {
      iVar1 = (uint)DAT_0216aefe * (uint)DAT_0216aefc * 0x20;
      DC_FlushRange(*(undefined4 *)(DAT_0216e844 + 0x780),iVar1);
      FUN_02066ac4(*(undefined4 *)(DAT_0216e844 + 0x780),(uint)DAT_0216aef6 << 5,iVar1);
    }
    *param_2 = '\0';
  }
  return;
}

