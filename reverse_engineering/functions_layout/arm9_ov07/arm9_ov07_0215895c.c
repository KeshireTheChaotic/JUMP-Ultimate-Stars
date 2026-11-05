
void FUN_0215895c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_20;
  
  iVar8 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  local_20 = 0;
  iVar6 = *(int *)(iVar7 + 0x7c);
  iVar3 = *(int *)(iVar6 + 0x10);
  iVar4 = *(int *)(iVar6 + 0xc);
  FUN_02158674(*(undefined4 *)(iVar7 + 0x38),*(char *)(iVar6 + 2) != '\0');
  for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
    iVar9 = *(int *)(iVar7 + iVar6 * 4 + 0x50);
    if (*(char *)(iVar3 + iVar6 * 0x18) == '\0') {
      FUN_02158b34(iVar7,iVar6,0);
      piVar5 = *(int **)(iVar9 + 4);
      (**(code **)(*piVar5 + 0xd8))(piVar5,0);
    }
    else {
      if (*(char *)(iVar3 + iVar6 * 0x18 + 1) == '\0') {
        FUN_02158b34(iVar7,iVar6,1);
        FUN_02158b74(iVar7,iVar6,0);
      }
      else {
        FUN_02158b34(iVar7,iVar6,0);
        FUN_02158b74(iVar7,iVar6,1);
        local_20 = local_20 + 1;
      }
      piVar5 = *(int **)(iVar9 + 4);
      (**(code **)(*piVar5 + 0xd8))(piVar5,1);
      iVar8 = iVar8 + 1;
    }
  }
  iVar6 = *(int *)(iVar7 + 0x4c);
  iVar4 = *(int *)(*(int *)(iVar7 + 0x7c) + 8);
  bVar2 = false;
  if ((-1 < iVar4) && (iVar4 = iVar4 * 0x18, *(char *)(iVar3 + iVar4) != '\0')) {
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + 0x50);
    *(int *)(iVar3 + 0x10) = (*(int *)(iVar7 + 0x78) + iVar4 + 0x48) * 0x1000;
    FUN_0214f240(iVar3,1);
    bVar2 = true;
  }
  piVar5 = *(int **)(iVar6 + 4);
  if (bVar2) {
    (**(code **)(*piVar5 + 0xd8))(piVar5,1);
  }
  else {
    (**(code **)(*piVar5 + 0xd8))(piVar5,0);
  }
  if (*(int *)(*(int *)(iVar7 + 0x7c) + 8) == 0) {
    iVar3 = *(int *)(iVar7 + 0x48);
    if ((iVar8 < 2) || (local_20 != 0)) {
      func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
      func_0x021b65d8(*(undefined4 *)(iVar3 + 4));
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      func_0x021bd730(*(undefined4 *)(iVar7 + 0x60),100,0);
      *(undefined1 *)(iVar7 + 0x6d) = 0;
    }
    else {
      piVar5 = *(int **)(iVar3 + 4);
      if (*(char *)(*(int *)(iVar7 + 0x7c) + 4) == '\0') {
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        func_0x021b65e0(*(undefined4 *)(iVar3 + 4));
      }
      else {
        func_0x021b6214(piVar5,0);
        func_0x021b65d8(*(undefined4 *)(iVar3 + 4));
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      }
      if (*(char *)(iVar7 + 0x6d) == '\0') {
        if (*(char *)(*(int *)(iVar7 + 0x7c) + 3) == '\0') {
          func_0x021bd730(*(undefined4 *)(iVar7 + 0x60),0x65,0);
        }
        else {
          func_0x021bd730(*(undefined4 *)(iVar7 + 0x60),0x66,0);
        }
      }
    }
  }
  if (**(char **)(iVar7 + 0x7c) != '\0') {
    bVar1 = (*(char **)(iVar7 + 0x7c))[1];
    if ((*(int *)(iVar7 + 0x44) != 0) && ((uint)*(byte *)(iVar7 + 0x70) != (uint)bVar1)) {
      iVar3 = FUN_0214f898(*(int *)(iVar7 + 0x44),0x31305053);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),bVar1 + 7 | 0x8f0000,0);
      (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      *(byte *)(iVar7 + 0x70) = bVar1;
    }
  }
  return;
}

