
void FUN_021507a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG source_file_inferred="JArenaMissionTry.cpp" */
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 4;
    uVar1 = FUN_020101f4((&PTR_s_JArena_JArena_aar_0216bdec)[iVar2],0);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar3 + 0x14) = uVar1;
  } while (iVar2 < 7);
  iVar2 = 0;
  do {
    if (iVar2 != 2) {
      if (iVar2 < 3) {
        iVar3 = FUN_0203b414((int)(char)(&DAT_02169ce8)[iVar2]);
      }
      else {
        iVar3 = FUN_0203b424();
      }
      uVar1 = FUN_0214faac((&PTR_s_Info_bg_atm_0216bdd8)[iVar2],(&PTR_s_Info_bg_dig_0216bdc4)[iVar2]
                           ,*(undefined4 *)(iVar3 + 0x88));
      *(undefined4 *)(param_1 + iVar2 * 4 + 0x30) = uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = FUN_0203b414(3);
  uVar1 = FUN_0214fb80(s_JArena_mis00_dtx_0216c00c,*(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}

