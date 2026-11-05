
int FUN_0205c614(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_020ae050 + 0x8c) + 0xc);
  if (iVar1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(*(int *)(DAT_020ae050 + 0x8c) + iVar1);
  }
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  if ((int)param_1 < 0) {
    return 0;
  }
  if (*puVar2 <= param_1) {
    return 0;
  }
  if (puVar2[param_1 + 1] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_020ae050 + 0x8c) + puVar2[param_1 + 1];
  }
  return iVar1;
}

