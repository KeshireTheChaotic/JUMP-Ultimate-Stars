
undefined4 FUN_02156004(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar2 = FUN_02155824();
  iVar6 = 0;
  do {
    if (*(int *)(param_2 + iVar6 * 4 + 4) != 0) {
      FUN_02155654();
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  do {
    piVar3 = *(int **)(*(int *)(param_2 + iVar6 * 4 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  do {
    piVar3 = *(int **)(*(int *)(param_2 + iVar6 * 4 + 0x8c) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  FUN_02156ec0(param_1);
  if (iVar2 == 0) {
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),0x83001c,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x50) + 4),0x83001b,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x54) + 4),0x83001c,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x58) + 4),0x83001c,0);
    iVar2 = 2;
    do {
      piVar3 = *(int **)(*(int *)(param_2 + iVar2 * 4 + 0x44) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    uVar5 = 1;
  }
  else {
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x44) + 4),*(byte *)(iVar2 + 4) + 0x9fffff,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4),*(char *)(iVar2 + 8) + 0x830013,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),
                 (char)(&DAT_0216d5dc)[*(char *)(iVar2 + 8)] + 0x830100 + (int)*(char *)(iVar2 + 9),
                 0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x50) + 4),*(byte *)(iVar2 + 6) + 0x830004,0);
    cVar1 = *(char *)(iVar2 + 6);
    if (cVar1 == '\0') {
      iVar6 = FUN_0214e238(iVar2,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x54) + 4),iVar6 + 0x830000,0);
      iVar6 = FUN_0214e238(iVar2,1);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x58) + 4),iVar6 + 0x830000,0);
      uVar5 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar5);
      uVar5 = FUN_0214e190(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 8),uVar5);
      uVar5 = FUN_0214e190(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0xc),uVar5);
      iVar6 = 0;
      do {
        iVar4 = FUN_0215654c(*(undefined1 *)(iVar2 + 7),iVar6);
        if (iVar4 == 0) {
          uVar5 = DAT_0216fa0c;
        }
        else {
          FUN_0214e318(iVar2,iVar6);
          uVar5 = FUN_0214e05c();
        }
        iVar4 = FUN_02074294(uVar5);
        piVar3 = *(int **)(*(int *)(*(int *)(param_2 + iVar6 * 4 + 0x10) + 4) + 100);
        (**(code **)(*piVar3 + 0x68))(piVar3,uVar5);
        local_28 = (0xc4 - (iVar4 * 0xc) / 2) * 0x1000;
        FUN_02150a10(*(undefined4 *)(param_2 + iVar6 * 4 + 0x10),&local_28);
        piVar3 = *(int **)(*(int *)(param_2 + iVar6 * 4 + 0x10) + 4);
        (**(code **)(*piVar3 + 0xd8))(piVar3,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      uVar5 = FUN_0214e0a4(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),uVar5);
      uVar5 = FUN_0214e10c(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x20),uVar5);
      uVar5 = FUN_0214e0a4(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x24),uVar5);
      uVar5 = FUN_0214e10c(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x28),uVar5);
    }
    else if (cVar1 == '\x01') {
      iVar6 = FUN_0214e43c(iVar2);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x54) + 4),iVar6 + 0x830000,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x58) + 4),0x83001c,0);
      uVar5 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar5);
      uVar5 = FUN_0214e350(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),uVar5);
      uVar5 = FUN_0214e360(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 0x20),uVar5);
      FUN_02155848(*(undefined4 *)(param_2 + 8),DAT_0216fa10);
      iVar2 = 3;
      do {
        FUN_02155848(*(undefined4 *)(param_2 + iVar2 * 4 + 4),DAT_0216fa10);
        local_2c = 0xbe000;
        FUN_02150a10(*(undefined4 *)(param_2 + iVar2 * 4 + 4),&local_2c);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      FUN_02155848(*(undefined4 *)(param_2 + 0x24),DAT_0216fa10);
    }
    else if (cVar1 == '\x02') {
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x54) + 4),0x83001c,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x58) + 4),0x83001c,0);
      uVar5 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar5);
      FUN_02155848(*(undefined4 *)(param_2 + 8),DAT_0216fa10);
      iVar2 = 3;
      do {
        FUN_02155848(*(undefined4 *)(param_2 + iVar2 * 4 + 4),DAT_0216fa10);
        local_30 = 0xbe000;
        FUN_02150a10(*(undefined4 *)(param_2 + iVar2 * 4 + 4),&local_30);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),DAT_0216fa10);
      FUN_02155848(*(undefined4 *)(param_2 + 0x24),DAT_0216fa10);
    }
    iVar2 = 0;
    *(code **)(param_1 + 0x3a8) = FUN_02156578;
    do {
      piVar3 = *(int **)(*(int *)(param_2 + iVar2 * 4 + 0x44) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    uVar5 = 0;
  }
  return uVar5;
}

