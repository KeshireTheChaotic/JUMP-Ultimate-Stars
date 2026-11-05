
void FUN_02156a60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar5 = (*(int **)(param_1 + 4))[4];
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar5 + 0xec) & 2) != 0)) {
    iVar2 = FUN_0203b404();
    FUN_0214f7f8(*(undefined4 *)(iVar2 + 0x88));
    iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(iVar5 + 0xf8)])();
    uVar1 = (uint)*(byte *)(iVar5 + (*(uint *)(iVar5 + 0xf8) & 0xff) * 0x14 +
                            *(int *)(*(int *)(param_1 + 4) + 0x124) + 0x128);
    if (uVar1 < 3) {
      iVar5 = FUN_021519b4(param_1,1);
      FUN_02023894(*(undefined4 *)(iVar5 + 4),uVar1 + 0x850018,0);
      (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
      uStack_34 = 0x14000;
      uStack_30 = 0x10000;
      FUN_021511c8(iVar5,&uStack_30,&uStack_34);
      piVar4 = *(int **)(iVar5 + 4);
      if (iVar2 == 0) {
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
      else {
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      }
      iVar5 = FUN_021519b4(param_1,2);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    }
    else {
      iVar5 = FUN_0200d12c(uVar1 + 1,10);
      FUN_0200d12c(uVar1 + 1,10);
      iVar3 = FUN_021519b4(param_1,1);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar5 + 0x85001b,0);
      (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      uStack_1c = 0x10000;
      uStack_18 = 0xe000;
      FUN_021511c8(iVar3,&uStack_18,&uStack_1c);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      if ((iVar5 == 0) || (iVar2 == 0)) {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      }
      else {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      }
      iVar3 = FUN_021519b4(param_1,2);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),extraout_r1 + 0x85001b,0);
      (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      if (iVar5 == 0) {
        uStack_2c = 0x10000;
        uStack_28 = 0x11000;
        FUN_021511c8(iVar3,&uStack_28,&uStack_2c);
      }
      else {
        uStack_24 = 0x10000;
        uStack_20 = 0x16000;
        FUN_021511c8(iVar3,&uStack_20,&uStack_24);
      }
      piVar4 = *(int **)(iVar3 + 4);
      if (iVar2 == 0) {
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
      else {
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      }
    }
    FUN_0214f834();
  }
  return;
}

