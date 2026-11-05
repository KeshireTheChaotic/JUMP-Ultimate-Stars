
void FUN_021bbd28(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(char *)(iVar2 + 0x9d) = *(char *)(iVar2 + 0x9d) + '\x01';
  iVar1 = *(char *)(iVar2 + 0x9d) * 0x100;
  local_10 = (int)*(short *)(iVar2 + 0x56) << 0xc;
  local_c = ((int)*(short *)(iVar2 + 0x54) - ((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3)) *
            0x1000;
  FUN_021bb970(*(undefined4 *)(iVar2 + 0x1c),&local_c,&local_10);
  if (('\a' < *(char *)(iVar2 + 0x9d)) || (*(char *)(iVar2 + 0xa2) == '\0')) {
    *(undefined1 *)(iVar2 + 0xa4) = 0;
    *(undefined1 *)(iVar2 + 0xa7) = 1;
    FUN_021bc0bc(iVar2);
    FUN_021b65cc();
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),FUN_021bad90);
  }
  if (*(char *)(iVar2 + 0xa5) != '\0') {
    FUN_02073840();
  }
  return;
}

