
void FUN_021566dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_38;
  int aiStack_34 [8];
  
  iVar5 = (*(int **)(param_1 + 4))[4];
  aiStack_34[7] = param_4;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar5 + 0xec) & 2) != 0)) {
    iVar6 = (int)*(short *)(iVar5 + *(int *)(iVar5 + 0xf8) * 0x28 +
                            *(int *)(*(int *)(param_1 + 4) + 0x124) * 2 + 0x1c8);
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(iVar5 + 0xf8)])();
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    iVar5 = FUN_0200d12c(iVar6,100);
    iVar6 = iVar6 + iVar5 * -100;
    iVar2 = FUN_0200d12c(iVar6,10);
    iVar7 = 0xc;
    iVar3 = FUN_0203b404();
    FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
    iVar3 = FUN_021519b4(param_1,1);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar5 + 0x85002d,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    aiStack_34[5] = 0xc000;
    aiStack_34[6] = 0x4000;
    FUN_021511c8(iVar3,aiStack_34 + 6,aiStack_34 + 5);
    piVar4 = *(int **)(iVar3 + 4);
    if (iVar5 == 0) {
      (**(code **)(*piVar4 + 0xd8))(piVar4,0);
    }
    else {
      (**(code **)(*piVar4 + 0xd8))(piVar4,1);
    }
    iVar3 = FUN_021519b4(param_1,2);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar2 + 0x85002d,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    if (iVar5 == 0) {
      if (iVar2 != 0) {
        aiStack_34[1] = 0xc000;
        aiStack_34[2] = 0x8000;
        FUN_021511c8(iVar3,aiStack_34 + 2,aiStack_34 + 1);
        iVar7 = 0x10;
      }
    }
    else {
      aiStack_34[3] = 0xc000;
      aiStack_34[4] = 0xc000;
      FUN_021511c8(iVar3,aiStack_34 + 4,aiStack_34 + 3);
      iVar7 = 0x14;
    }
    if ((iVar5 == 0) && (iVar2 == 0)) {
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
    }
    else {
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    }
    iVar5 = FUN_021519b4(param_1,3);
    FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar6 + iVar2 * -10 + 0x85002d,0);
    (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
    uStack_38 = 0xc000;
    aiStack_34[0] = iVar7 << 0xc;
    FUN_021511c8(iVar5,aiStack_34,&uStack_38);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    FUN_0214f834();
  }
  return;
}

