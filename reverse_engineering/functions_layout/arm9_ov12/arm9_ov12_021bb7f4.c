
void FUN_021bb7f4(int param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(char *)(iVar1 + 0x9d) = *(char *)(iVar1 + 0x9d) + '\x01';
  iVar2 = *(char *)(iVar1 + 0x9d) * 0x100;
  local_18 = (int)*(short *)(iVar1 + 0x56) << 0xc;
  local_14 = ((*(short *)(iVar1 + 0x54) + 0x100) -
             ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3)) * 0x1000;
  FUN_021bb970(*(undefined4 *)(iVar1 + 0x1c),&local_14,&local_18);
  if ((*(char *)(iVar1 + 0x9d) < '\b') && (*(char *)(iVar1 + 0xa2) != '\0')) goto LAB_021bb944;
  *(undefined1 *)(iVar1 + 0x9d) = 0;
  local_20 = (int)*(short *)(iVar1 + 0x56) << 0xc;
  local_1c = (int)*(short *)(iVar1 + 0x54) << 0xc;
  FUN_021bb970(*(undefined4 *)(iVar1 + 0x1c),&local_1c,&local_20);
  switch(*(undefined1 *)(iVar1 + 0x9c)) {
  case 0:
    break;
  case 1:
    FUN_021bbb18(param_1);
    goto LAB_021bb940;
  case 2:
    FUN_021bbb18(param_1);
    goto LAB_021bb940;
  case 3:
    break;
  case 4:
    break;
  case 5:
    goto LAB_021bb8f0;
  case 6:
LAB_021bb8f0:
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    if (*(char *)(iVar2 + 0xa9) != '\0') {
      FUN_021bcbb0(iVar2);
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021bb9bc);
    if (*(char *)(iVar2 + 0xa5) != '\0') {
      FUN_02073840();
    }
    goto LAB_021bb940;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02028384(*(int *)(param_1 + 4),FUN_021bba0c);
  if (*(char *)(iVar2 + 0xa5) != '\0') {
    FUN_02073840();
  }
LAB_021bb940:
  FUN_021b65cc();
LAB_021bb944:
  if (*(char *)(iVar1 + 0xa5) != '\0') {
    FUN_02073840();
  }
  FUN_021bc0bc(iVar1,1);
  return;
}

