
/* JUS-GAME CommunicationWait::Main_CommunicationAdd [source-string]
   __FILE__="CommunicationWait.cpp" __FUNCTION__="Main_CommunicationAdd" lines=[90] passed to 1
   source-location call(s) */

int CommunicationWait::Main_CommunicationAdd(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_02073778();
  FUN_0207379c();
  piVar2 = (int *)thunk_FUN_0201a228(0x48,s_CommunicationWait_cpp_0216acac,
                                     s_Main_CommunicationAdd_0216ac94,0x5a);
  FUN_020517fc(piVar2,0,0x48);
  iVar3 = FUN_02026f94();
  piVar2[1] = iVar3;
  local_14 = 0x80000;
  FUN_0214ed20(piVar2[1],&local_14);
  FUN_02028384(*(undefined4 *)(piVar2[1] + 4),FUN_021686a4);
  (**(code **)(**(int **)(piVar2[1] + 4) + 0x24))(*(int **)(piVar2[1] + 4),piVar2);
  piVar2[9] = 0;
  iVar3 = FUN_02026f94();
  piVar2[0xe] = iVar3;
  local_18 = 0x82000;
  FUN_0214ed20(piVar2[0xe],&local_18);
  FUN_02028384(*(undefined4 *)(piVar2[0xe] + 4),thunk_FUN_0208c0f0);
  (**(code **)(**(int **)(piVar2[0xe] + 4) + 0x24))(*(int **)(piVar2[0xe] + 4),piVar2);
  iVar3 = FUN_02026f94();
  piVar2[0xf] = iVar3;
  local_1c = 0x81000;
  FUN_0214ed20(piVar2[0xf],&local_1c);
  FUN_02028384(*(undefined4 *)(piVar2[0xf] + 4),FUN_02168944);
  (**(code **)(**(int **)(piVar2[0xf] + 4) + 0x24))(*(int **)(piVar2[0xf] + 4),piVar2);
  iVar3 = FUN_020310f4();
  *piVar2 = iVar3;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar3 + 4));
  iVar3 = FUN_0203b404();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar1;
  iVar3 = func_0x021caa0c(s_font_DSFont_aft_0216acc4,0,0);
  piVar4 = (int *)func_0x021c5fb4(*(undefined4 *)(iVar3 + 4));
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar6 = piVar4[6];
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  iVar3 = 0;
  psVar5 = DAT_0216ac78;
  while (*psVar5 != 0) {
    iVar3 = iVar3 + 1;
    psVar5 = psVar5 + 1;
  }
  piVar4 = *(int **)(*(int *)(iVar6 + 4) + 0x50);
  piVar4[3] = (0x80 - ((uint)(iVar3 * 0xb) >> 1)) * 0x1000;
  piVar4[4] = 0x52000;
  if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
    (**(code **)(*piVar4 + 0x18))();
  }
  *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  piVar4 = *(int **)(iVar6 + 4);
  (**(code **)(*(int *)piVar4[0x19] + 0x70))();
  (**(code **)(*piVar4 + 0xc4))();
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  FUN_02028384(*(undefined4 *)(iVar6 + 4),FUN_0216889c);
  local_20 = 0x80000;
  FUN_0214ed20(iVar6,&local_20);
  piVar2[0xd] = iVar6;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  if (DAT_0216c6e8 == '\0') {
    DAT_02093c08 = DAT_02093c08 + 1;
    FUN_02028384(*(undefined4 *)(piVar2[1] + 4),FUN_021684dc);
    iVar3 = func_0x021ba49c(1,0,1);
    piVar2[0x11] = iVar3;
    (**(code **)(**(int **)(piVar2[0xd] + 4) + 0xd8))(*(int **)(piVar2[0xd] + 4),0);
  }
  else {
    DAT_0216c6e8 = '\0';
    DAT_02093c08 = DAT_02093c08 + 1;
  }
  iVar3 = StageData::StageData_Create();
  piVar2[0x10] = iVar3;
  piVar2[10] = 10;
  piVar2[0xc] = 0;
  FUN_02073ebc(3,1);
  FUN_0207382c();
  FUN_0207382c();
  FUN_0207382c();
  FUN_0207382c();
  FUN_02073ebc(2,1);
  return *piVar2;
}

