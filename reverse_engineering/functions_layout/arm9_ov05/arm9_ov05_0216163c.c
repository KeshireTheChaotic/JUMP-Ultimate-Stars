
undefined4 FUN_0216163c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  uVar5 = 0;
  switch(param_2) {
  case 0:
    iVar2 = **(int **)(iVar4 + 0x24);
    if ((*(uint *)(iVar2 + *(int *)(iVar2 + 0x70) * 4 + 0x18) &
         ~*(uint *)(iVar2 + *(int *)(iVar2 + 0x74) * 4 + 0x18) & 0x10) == 0) {
      piVar1 = *(int **)(*(int *)(iVar4 + 0x3c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      uVar5 = 1;
    }
    else {
      piVar1 = *(int **)(*(int *)(iVar4 + 0x3c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      FUN_0207342c(0x78,7);
    }
    break;
  case 1:
    FUN_02028330(*(undefined4 *)(*(int *)(iVar4 + 0x38) + 4));
    piVar1 = *(int **)(*(int *)(iVar4 + 0x38) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    break;
  case 2:
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar4 + 0x38) + 4));
    piVar1 = *(int **)(*(int *)(iVar4 + 0x38) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    break;
  case 3:
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 0x50);
    *(int *)(iVar4 + 0xc) = param_3 << 0xc;
    FUN_02150090(iVar4,1);
    break;
  case 4:
    iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 0x50);
    *(int *)(iVar4 + 0x10) = param_3 << 0xc;
    FUN_02150090(iVar4,1);
    break;
  case 5:
    if (param_3 == 0) {
      piVar1 = *(int **)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 100);
      pcVar3 = *(code **)(*piVar1 + 0x60);
      (*pcVar3)(piVar1,0,pcVar3,param_4,param_4);
    }
    else {
      piVar1 = *(int **)(*(int *)(*(int *)(iVar4 + 0x38) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,1);
    }
  }
  return uVar5;
}

