
void FUN_020137a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3[0xc] != *(int *)(param_2 + 4)) {
    return;
  }
  if ((piVar3[0x10] & 8U) == 0) {
    (**(code **)(*piVar3 + 0x70))();
  }
  else {
    (**(code **)(*piVar3 + 0x70))();
    (**(code **)(*piVar3 + 0xc))();
  }
  iVar4 = piVar3[7];
  iVar1 = (**(code **)(**(int **)(iVar4 + 0x30) + 0x10))();
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar4 + 0x30);
    (**(code **)(*piVar2 + 0x60))(piVar2,0xc,FUN_020137a4,piVar3,param_4);
  }
  *(undefined1 *)((int)piVar3 + 0x45) = 0;
  return;
}

