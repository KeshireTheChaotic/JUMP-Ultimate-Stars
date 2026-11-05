
void FUN_02180c10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_10;
  int local_c;
  
  bVar3 = *(int *)(param_1 + 0xa4) == 0;
  if (!bVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 0x24);
    if (iVar1 == 0) {
      bVar3 = true;
    }
    else {
      param_2 = *(int *)(iVar1 + 4);
      if (param_2 == 0) {
        bVar3 = true;
      }
      else if (*(int *)(param_2 + 0x24) == 0) {
        bVar3 = true;
      }
    }
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x105) = 1;
    FUN_02180be4(param_1);
  }
  else {
    local_10 = (int)*(short *)(*(int *)(param_2 + 0x24) + 0x34) << 8;
    local_c = (int)*(short *)(*(int *)(param_2 + 0x24) + 0x36) << 8;
    uVar2 = FUN_02180cbc(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d64(uVar2,&local_10,0xffffffff);
    *(undefined1 *)(param_1 + 0xa8) = 2;
  }
  return;
}

