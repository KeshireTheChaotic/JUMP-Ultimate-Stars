
void FUN_0215687c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 local_58;
  undefined1 auStack_54 [20];
  undefined2 local_40;
  
  iVar4 = (*(int **)(param_1 + 4))[4];
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar4 + 0xec) & 2) != 0)) {
    iVar2 = (*(code *)(&PTR_LAB_0215413c_1_02169d3c)[*(int *)(iVar4 + 0xf8)])();
    if (iVar2 == 0) {
      puVar5 = &DAT_02169d34;
      local_58 = DAT_0216c1a8;
    }
    else {
      local_58 = FUN_02156f78(*(undefined4 *)(iVar4 + 0xe8),*(uint *)(iVar4 + 0xf8) & 0xff,
                              *(undefined1 *)
                               (iVar4 + *(uint *)(iVar4 + 0xf8) * 0x14 +
                                *(int *)(*(int *)(param_1 + 4) + 0x124) + 0x178));
      uVar3 = FUN_0207216c((&DAT_02169d28)[*(uint *)(iVar4 + 0xf8) & 0xff],
                           *(undefined1 *)
                            (iVar4 + *(uint *)(iVar4 + 0xf8) * 0x14 +
                             *(int *)(*(int *)(param_1 + 4) + 0x124) + 0x178));
      FUN_02051890(uVar3,auStack_54,0x14);
      local_40 = 0;
      puVar5 = auStack_54;
    }
    iVar4 = FUN_0203b404();
    FUN_0214f7f8(*(undefined4 *)(iVar4 + 0x88));
    iVar4 = FUN_021519b4(param_1,1);
    piVar6 = *(int **)(iVar4 + 4);
    (**(code **)(*(int *)piVar6[0x19] + 0x70))();
    (**(code **)(*piVar6 + 0xc4))();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    piVar6 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar6 + 0x6c))(piVar6,puVar5,0xffffffff);
    iVar4 = FUN_021519b4(param_1,2);
    piVar6 = *(int **)(iVar4 + 4);
    (**(code **)(*(int *)piVar6[0x19] + 0x70))();
    (**(code **)(*piVar6 + 0xc4))();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    piVar6 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar6 + 0x68))(piVar6,local_58);
    FUN_0214f834();
  }
  return;
}

