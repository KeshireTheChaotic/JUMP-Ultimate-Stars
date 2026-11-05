
void FUN_021c3a24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  uStack_c = param_4;
  if (*(char *)((int)piVar3 + 0xa6) < '\0') {
    *(char *)((int)piVar3 + 0xa6) = *(char *)((int)piVar3 + 0xa6) + '\x01';
    iVar1 = FUN_0203b3e4();
    FUN_021c39f8(*(undefined4 *)(iVar1 + 0x88),0x3f,(int)*(char *)((int)piVar3 + 0xa6));
    if (*(char *)((int)piVar3 + 0xa6) == '\0') {
      uStack_10 = 0;
      piVar2 = *(int **)(*(int *)(piVar3[2] + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&uStack_10);
      (**(code **)(**(int **)(*(int *)(piVar3[2] + 4) + 0x68) + 0x6c))();
    }
  }
  else {
    *(short *)(piVar3 + 0x29) = (short)piVar3[0x29] + 1;
    if (0x10 < *(ushort *)(piVar3 + 0x29)) {
      FUN_02028384(*(undefined4 *)(*piVar3 + 4),FUN_021c3910);
      *(undefined1 *)((int)piVar3 + 0xa6) = 0;
    }
  }
  return;
}

