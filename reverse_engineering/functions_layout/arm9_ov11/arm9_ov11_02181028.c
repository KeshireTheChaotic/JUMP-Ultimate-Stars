
void FUN_02181028(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    *(undefined1 *)(param_1 + 0xa9) = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(iVar1 + 4);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x24);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      local_10 = (int)*(short *)(iVar1 + 0x34) << 8;
      local_c = (int)*(short *)(*(int *)(iVar3 + 0x24) + 0x36) << 8;
      uVar2 = FUN_02180cbc(*(undefined4 *)(param_1 + 0x24));
      FUN_02176d64(uVar2,&local_10,0xffffffff);
      *(undefined1 *)(param_1 + 0xa8) = 2;
      *(int *)(param_1 + 0xa4) = param_1;
    }
  }
  return;
}

