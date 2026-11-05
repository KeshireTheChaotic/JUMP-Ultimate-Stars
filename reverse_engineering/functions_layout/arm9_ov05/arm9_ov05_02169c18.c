
void FUN_02169c18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  
  iVar5 = (*(int **)(param_1 + 4))[4];
  if (*(int *)(*(int *)(*(int *)(iVar5 + 0x44) + 4) + 0x148) == 0) {
    func_0x021b7170();
    FUN_0207342c(0x78,2);
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
    uVar2 = FUN_021696d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x15c),uVar1);
    iVar4 = *(int *)(iVar5 + 0x5c);
    if (iVar4 == 0) {
      (**(code **)(iVar5 + 0x10))(iVar5,*(undefined4 *)(iVar5 + 0x14),2,uVar2);
      FUN_020716d0(uVar2);
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(iVar5 + 0x60) = uVar2;
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar5 + 0x44) + 4));
      uVar3 = FUN_020758cc(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x60));
      FUN_020735e4();
      FUN_0207367c(0);
      FUN_020734e0(uVar3);
      *(undefined1 *)(iVar5 + 0x70) = 1;
      *(undefined4 *)(iVar5 + 0x6c) = 0;
      thunk_FUN_0207400c(&DAT_021724a0,&DAT_021719f4);
      uVar3 = FUN_02075878(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x60));
      thunk_FUN_020741c4(&DAT_021724a0,uVar3);
      piVar6 = *(int **)(*(int *)(iVar5 + 0x3c) + 4);
      (**(code **)(*(int *)piVar6[0x19] + 0x70))();
      (**(code **)(*piVar6 + 0xc4))();
      piVar6 = *(int **)(*(int *)(iVar5 + 0x3c) + 4);
      (**(code **)(*piVar6 + 0xd8))(piVar6,1);
      piVar6 = *(int **)(*(int *)(*(int *)(iVar5 + 0x3c) + 4) + 100);
      (**(code **)(*piVar6 + 0x68))(piVar6,&DAT_021724a0);
      FUN_02073f24(9,0,0x37);
      piVar6 = *(int **)(*(int *)(iVar5 + 0x34) + 4);
      (**(code **)(*piVar6 + 0xd8))(piVar6,1);
      local_50 = 0x100000;
      FUN_02150a10(*(undefined4 *)(iVar5 + 0x34),&local_50);
      FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 0x18) + 4),FUN_021693a0);
      iVar4 = FUN_02169ea8(uVar2);
      if (iVar4 != 0) {
        FUN_020715f4(uVar2);
        iVar4 = FUN_020758b8(*(undefined4 *)(iVar5 + 8),uVar2);
        iVar4 = (iVar4 + 0x875f) * 0x10000;
        local_4c = (undefined1)((uint)iVar4 >> 0x18);
        local_4b = (undefined1)((uint)iVar4 >> 0x10);
        local_4a = 0;
        uVar2 = FUN_02075878(*(undefined4 *)(iVar5 + 8),uVar2);
        thunk_FUN_020741c4(&local_4c,uVar2);
        piVar6 = *(int **)(*(int *)(iVar5 + 0x44) + 4);
        uVar1 = (**(code **)(*piVar6 + 0x1ac))(piVar6,uVar1);
        func_0x021adaf8(piVar6,uVar1,&local_4c);
      }
    }
    else if (iVar4 == 2) {
      uVar1 = FUN_0216d4f8(*(undefined4 *)(iVar5 + 0xc),uVar2);
      (**(code **)(iVar5 + 0x10))(iVar5,*(undefined4 *)(iVar5 + 0x14),2,uVar1);
      FUN_020714d4(uVar2);
    }
    FUN_0207342c(0x78,0);
  }
  return;
}

