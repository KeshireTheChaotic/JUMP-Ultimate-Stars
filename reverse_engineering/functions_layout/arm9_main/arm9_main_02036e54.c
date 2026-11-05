
void FUN_02036e54(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  
  iVar1 = FUN_020104b4(param_2 | 0x46000000);
  uVar7 = 0;
  piVar6 = *(int **)(iVar1 + 4);
  while( true ) {
    iVar1 = DAT_020a12cc;
    if (DAT_020a12d0 <= uVar7) {
      (**(code **)(**(int **)(param_1 + 100) + 0x5c))(*(int **)(param_1 + 100),piVar6);
      (**(code **)(*piVar6 + 0xc))();
      return;
    }
    uVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,0);
    puVar3 = *(undefined4 **)(iVar1 + uVar7 * 4);
    iVar1 = (**(code **)*puVar3)(puVar3,uVar2);
    if (iVar1 != 0) break;
    uVar7 = uVar7 + 1;
  }
  piVar4 = *(int **)(DAT_020a12cc + uVar7 * 4);
  pcVar5 = *(code **)(*piVar4 + 4);
  (*pcVar5)(piVar4,param_1,piVar6,pcVar5,param_4);
  (**(code **)(*piVar6 + 0xc))();
  return;
}

