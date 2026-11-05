
void FUN_02024ad4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(byte *)((int)param_1 + 0x29) & 0x3f) >> 5 == param_2) {
    return;
  }
  *(byte *)((int)param_1 + 0x29) =
       *(byte *)((int)param_1 + 0x29) & 0xdf | (byte)((param_2 & 1) << 5);
  for (uVar5 = 1; uVar4 = (**(code **)(*param_1 + 0xac))(), uVar5 < uVar4; uVar5 = uVar5 + 1) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0xc0))(param_1,uVar5);
      iVar3 = (**(code **)(**(int **)(iVar2 + 0x30) + 0x10))();
      if (iVar3 != 0) {
        (**(code **)(**(int **)(iVar2 + 0x30) + 0x60))
                  (*(int **)(iVar2 + 0x30),1,FUN_02024a68,0,param_4);
      }
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar5);
      FUN_0202788c(uVar1,1,FUN_02024a68,0);
    }
  }
  return;
}

