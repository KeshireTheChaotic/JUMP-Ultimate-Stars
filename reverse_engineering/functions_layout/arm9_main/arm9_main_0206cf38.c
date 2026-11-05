
void FUN_0206cf38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  for (uVar4 = 2; uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar4 < uVar3;
      uVar4 = uVar4 + 1) {
    iVar1 = FUN_0206c718(param_1,uVar4);
    piVar2 = *(int **)(iVar1 + 4);
    *(undefined2 *)(piVar2 + 0x20) = 0;
    local_20 = 0x1000;
    (**(code **)(*piVar2 + 0xf8))(piVar2,&local_20);
  }
  return;
}

