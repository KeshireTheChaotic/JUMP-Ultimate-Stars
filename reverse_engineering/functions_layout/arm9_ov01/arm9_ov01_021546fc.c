
void FUN_021546fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 4;
    uVar1 = FUN_020101f4((&PTR_s_JArena_JArena_aar_0216c1cc)[iVar2],0);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar3 + 0x10) = uVar1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    if (iVar2 != 2) {
      iVar3 = FUN_0203b414(iVar2 + 1);
      iVar3 = FUN_0214faac((&PTR_s_Info_bg_atm_0216c1b4)[iVar2],(&PTR_s_Info_bg_dig_0216c1c0)[iVar2]
                           ,*(undefined4 *)(iVar3 + 0x88),iVar2 * 4,param_4);
      *(int *)(param_1 + iVar2 * 4 + 0x24) = iVar3;
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

