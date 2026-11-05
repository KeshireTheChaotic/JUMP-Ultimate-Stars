
void FUN_021bcc28(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)*(short *)(param_1 + 0x5a);
  iVar5 = 0x20;
  iVar8 = iVar1 + -4;
  iVar6 = 0x40;
  iVar7 = 0x60;
  if (param_2 == 0) {
    iVar4 = (int)*(short *)(param_1 + 0x58) / 2 + -9;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x58) / 2 + -0xd;
  }
  for (iVar3 = iVar4; iVar3 < iVar4 + 8; iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar8,iVar5,0xf,0,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    iVar5 = iVar5 + 1;
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1 + -3,iVar6,0xf,0,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    iVar6 = iVar6 + 1;
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1 + -2,iVar7,0xf,0,0);
    iVar7 = iVar7 + 1;
  }
  if (param_2 == 0) {
    iVar4 = iVar4 + 10;
  }
  else {
    iVar4 = iVar4 + 9;
  }
  iVar5 = 0x28;
  iVar6 = 0x48;
  iVar7 = 0x68;
  for (iVar3 = iVar4; iVar3 < iVar4 + 8; iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar8,iVar5,0xf,0,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    iVar5 = iVar5 + 1;
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1 + -3,iVar6,0xf,0,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    iVar6 = iVar6 + 1;
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1 + -2,iVar7,0xf,0,0);
    iVar7 = iVar7 + 1;
  }
  if (param_2 != 0) {
    iVar6 = 0x80;
    iVar7 = 0x88;
    iVar3 = 0x90;
    for (iVar5 = iVar4 + 9; iVar5 < iVar4 + 0x11; iVar5 = iVar5 + 1) {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar5,iVar8,iVar6,0xf,0,0);
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      iVar6 = iVar6 + 1;
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar5,iVar1 + -3,iVar7,0xf,0,0);
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      iVar7 = iVar7 + 1;
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar5,iVar1 + -2,iVar3,0xf,0,0);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

