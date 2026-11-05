
void FUN_0215b8f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  *(byte *)(param_1 + 0x4dd) = *(byte *)(param_2 + 0xe) & 0xf;
  *(char *)(param_1 + 0x4de) = (char)((int)(*(byte *)(param_2 + 0xe) & 0xf0) >> 4);
  do {
    iVar1 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar1 + 0x4ea) = 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  if (*(char *)(param_1 + 0x4dd) == '\0') {
    *(undefined1 *)(param_1 + 0x4eb) = 0;
  }
  if (3 < *(byte *)(param_1 + 0x4dd)) {
    *(undefined1 *)(param_1 + 0x4ed) = 0;
  }
  if (*(char *)(param_1 + 0x4de) == '\0') {
    *(undefined1 *)(param_1 + 0x4ec) = 0;
  }
  if (2 < *(byte *)(param_1 + 0x4de)) {
    *(undefined1 *)(param_1 + 0x4ea) = 0;
  }
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x160);
    if (*(char *)(param_1 + iVar3 + 0x4ea) == '\0') {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0x148))(piVar2,8);
    }
    else {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0x14c))(piVar2,8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_0215bb8c(param_1,1,(short)(ushort)*(byte *)(param_1 + 0x4dd) * 0x30 + 0x18,
               (short)(ushort)*(byte *)(param_1 + 0x4de) * 0x30 + 0x18);
  FUN_02159778(param_1,1,1);
  FUN_02159bdc(param_1,1,1);
  iVar3 = 0;
  do {
    if (3 < iVar3) {
LAB_0215ba64:
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x34);
      FUN_0215ceec(param_1);
      FUN_0215ccf0(param_1,*(undefined4 *)(param_1 + 0x184),0,0,1);
      FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),&LAB_0215baac);
      return;
    }
    if (*(char *)(param_1 + iVar3 + 0x4ea) != '\0') {
      func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + iVar3 * 4 + 0x160) + 4),1);
      FUN_0215b88c(param_1,iVar3);
      goto LAB_0215ba64;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

