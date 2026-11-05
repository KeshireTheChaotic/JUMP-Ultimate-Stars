
undefined4 FUN_02157188(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_02155824();
  iVar5 = 0;
  do {
    if (*(int *)(param_2 + iVar5 * 4 + 4) != 0) {
      FUN_02155654();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  if (iVar2 == 0) {
    piVar3 = *(int **)(*(int *)(param_2 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4),0x83001c,0);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),0x83001c,0);
  }
  else {
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x44) + 4),*(byte *)(iVar2 + 4) + 0x9fffff,0);
    piVar3 = *(int **)(*(int *)(param_2 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    cVar1 = *(char *)(iVar2 + 6);
    if (cVar1 == '\0') {
      iVar5 = FUN_0214e238(iVar2,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4),iVar5 + 0x830000,0);
      iVar5 = FUN_0214e238(iVar2,1);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),iVar5 + 0x830000,0);
      uVar4 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar4);
      uVar4 = FUN_0214e190(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 8),uVar4);
      uVar4 = FUN_0214e190(iVar2,2);
      FUN_02155848(*(undefined4 *)(param_2 + 0xc),uVar4);
      uVar4 = FUN_0214e190(iVar2,3);
      FUN_02155848(*(undefined4 *)(param_2 + 0x10),uVar4);
      uVar4 = FUN_0214e0a4(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x14),uVar4);
      uVar4 = FUN_0214e11c(iVar2,0,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x18),uVar4);
      uVar4 = FUN_0214e11c(iVar2,0,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),uVar4);
      uVar4 = FUN_0214e0a4(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x20),uVar4);
      uVar4 = FUN_0214e11c(iVar2,1,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x24),uVar4);
      uVar4 = FUN_0214e11c(iVar2,1,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x28),uVar4);
    }
    else if (cVar1 == '\x01') {
      iVar5 = FUN_0214e43c(iVar2);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4),iVar5 + 0x830000,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),0x83001c,0);
      uVar4 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar4);
      uVar4 = FUN_0214e350(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 0x14),uVar4);
      uVar4 = FUN_0214e3d4(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0x18),uVar4);
      uVar4 = FUN_0214e3d4(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),uVar4);
      FUN_02155848(*(undefined4 *)(param_2 + 8),DAT_0216fa10);
      FUN_02155848(*(undefined4 *)(param_2 + 0x20),DAT_0216fa10);
    }
    else if (cVar1 == '\x02') {
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x48) + 4),0x83001c,0);
      FUN_02023894(*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4),0x83001c,0);
      uVar4 = FUN_0214e030(iVar2);
      FUN_02155848(*(undefined4 *)(param_2 + 4),uVar4);
      thunk_FUN_0207400c(param_1 + 0x45c,&DAT_0216fc28);
      uVar4 = FUN_0214e518(iVar2);
      thunk_FUN_020741c4(param_1 + 0x45c,uVar4);
      FUN_02155848(*(undefined4 *)(param_2 + 8),param_1 + 0x45c);
      uVar4 = FUN_0214e554(iVar2,0);
      FUN_02155848(*(undefined4 *)(param_2 + 0xc),uVar4);
      uVar4 = FUN_0214e554(iVar2,1);
      FUN_02155848(*(undefined4 *)(param_2 + 0x10),uVar4);
      FUN_02155848(*(undefined4 *)(param_2 + 0x14),DAT_0216fa10);
      FUN_02155848(*(undefined4 *)(param_2 + 0x20),DAT_0216fa10);
    }
  }
  iVar2 = 1;
  do {
    piVar3 = *(int **)(*(int *)(param_2 + iVar2 * 4 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}

