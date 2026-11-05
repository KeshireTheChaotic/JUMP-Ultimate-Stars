
void FUN_021c44ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_10;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  *(char *)((int)piVar3 + 0xa6) = *(char *)((int)piVar3 + 0xa6) + '\x04';
  uStack_10 = param_4;
  iVar1 = FUN_0203b3e4();
  FUN_021c39f8(*(undefined4 *)(iVar1 + 0x88),0x3f,(int)*(char *)((int)piVar3 + 0xa6));
  if ((int)((uint)*(byte *)((int)piVar3 + 0xa9) << 0x1e) < 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021c3910);
    return;
  }
  if (-1 < *(char *)((int)piVar3 + 0xa6)) {
    *(byte *)((int)piVar3 + 0xa9) = *(byte *)((int)piVar3 + 0xa9) & 0xfe;
    if ((int)((uint)*(byte *)((int)piVar3 + 0xa9) << 0x1c) < 0) {
      uStack_10 = 0;
      piVar2 = *(int **)(*(int *)(piVar3[2] + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&uStack_10);
      (**(code **)(**(int **)(*(int *)(piVar3[2] + 4) + 0x68) + 0x6c))();
      FUN_020282f4(*(undefined4 *)(param_1 + 4));
      return;
    }
    FUN_02028384(*(undefined4 *)(*piVar3 + 4),0x21c3aa9);
  }
  return;
}

