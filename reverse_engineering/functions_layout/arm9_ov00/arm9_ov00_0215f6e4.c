
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 2 instantiations in arm9_ov00 */

void ALNodeImp::Create(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [3];
  
  local_28[2] = param_4;
  iVar1 = FUN_02026f94();
  *param_1 = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_0215fe4c);
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  iVar1 = jus_AllocDebug(0x78,s_ALNodeImp_h_02161148,s_Create_02161a90,0x4c3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)jus_Class_0209c0b4::jus_Class_0209c0b4(iVar1,FUN_02024a30,1);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  (**(code **)(**(int **)(piVar2[6] + 4) + 0xd8))(*(int **)(piVar2[6] + 4),1);
  iVar1 = FUN_0203b414(2);
  iVar1 = FUN_0214ec98(s_ending_hyouki_bg_atm_02161ac4,s_ending_hyouki_bg_dig_02161adc,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[1] = iVar1;
  iVar1 = FUN_0203b414(3);
  iVar1 = FUN_0214ec98(s_ending_hyouki_galaxy_atm_02161af4,s_ending_hyouki_galaxy_dig_02161b10,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[2] = iVar1;
  iVar1 = FUN_0203b424(2);
  iVar1 = FUN_0214ec98(s_ending_copyright00_atm_02161b2c,s_ending_copyright00_dig_02161b44,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[3] = iVar1;
  iVar1 = FUN_0203b424(3);
  iVar1 = FUN_0214ec98(s_ending_copyright01_atm_02161b5c,s_ending_copyright01_dig_02161b74,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[4] = iVar1;
  iVar1 = FUN_0203b424(2);
  iVar1 = FUN_0214ec98(s_ending_copyright02_atm_02161b8c,&DAT_02161ba4,*(undefined4 *)(iVar1 + 0x88)
                      );
  param_1[5] = iVar1;
  iVar1 = FUN_0203b424(3);
  iVar1 = FUN_0214ec98(s_ending_copyright03_atm_02161bbc,s_ending_copyright03_dig_02161bd4,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[6] = iVar1;
  iVar1 = FUN_0203b424(2);
  iVar1 = FUN_0214ec98(s_ending_copyright04_atm_02161bec,s_ending_copyright04_dig_02161c04,
                       *(undefined4 *)(iVar1 + 0x88));
  param_1[7] = iVar1;
  iVar1 = 2;
  do {
    local_28[0] = ((iVar1 + -2) * 0x100 + 0xc0) * 0x1000;
    FUN_02150f98(param_1[iVar1 + 1],local_28);
    FUN_02028384(*(undefined4 *)(param_1[iVar1 + 1] + 4),FUN_0215fec0);
    local_28[1] = 0x8a000;
    (**(code **)(**(int **)(param_1[iVar1 + 1] + 4) + 0xa0))
              (*(int **)(param_1[iVar1 + 1] + 4),local_28 + 1);
    FUN_020282f4(*(undefined4 *)(param_1[iVar1 + 1] + 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  iVar1 = FUN_0203b414(0);
  local_48 = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_48);
  iVar1 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b414(1);
  local_44 = 0x3000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_44);
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,1);
  iVar1 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b414(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
  iVar1 = FUN_0203b414(2);
  local_40 = 0;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_40);
  iVar1 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),3);
  iVar1 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),8);
  iVar1 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b414(3);
  local_3c = 0x2000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_3c);
  iVar1 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b424(0);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0);
  iVar1 = FUN_0203b424(0);
  local_38 = 0;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_38);
  iVar1 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b424(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0);
  iVar1 = FUN_0203b424(1);
  local_34 = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_34);
  iVar1 = FUN_0203b424(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,1);
  iVar1 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x40);
  iVar1 = FUN_0203b424(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b424(2);
  local_30 = 0x2000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_30);
  iVar1 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x40);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b424(3);
  local_2c = 0x3000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_2c);
  return;
}

