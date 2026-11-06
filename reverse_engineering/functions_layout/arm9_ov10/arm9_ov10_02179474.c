
void FUN_02179474(int param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if ((DAT_021a75a8 != (char *)0x0) && (*DAT_021a75a8 != '\0')) {
    pcVar1 = DAT_021a75a8;
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1 = DAT_021a75a8;
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    DAT_021a75a8[2] = '\0';
    uVar2 = OS_GetTick();
    *(undefined8 *)(DAT_021a75a8 + 0x18) = uVar2;
    if (param_1 == 0) {
      uVar2 = OS_GetTick();
      *(undefined8 *)(DAT_021a75a8 + 0x10) = uVar2;
    }
  }
  return;
}

