
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02158aec(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_5c [22];
  char local_46 [26];
  int local_2c;
  int local_28;
  
  pcVar5 = s_char_ybBgOption_ncl_l_0216a8f8;
  pcVar4 = local_5c;
  iVar3 = 0x16;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar5 = s_char_ybBgOption1_ncl_l_0216a910;
  pcVar4 = local_46;
  iVar3 = 0x17;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_02154750(s_char_jbBgOption_ncg_l_0216b7c4,0x20669f9);
  FUN_02154750(s_char_jb5OptMenu_nsc_l_0216b7dc,0x2066c19);
  uVar2 = FUN_0215477c(local_46);
  DAT_0216e734 = FUN_021658c4(uVar2,0,4);
  uVar2 = FUN_0215477c(local_5c);
  iVar3 = FUN_021658c4(uVar2,0,4);
  FUN_0206a4f8(&local_2c);
  if (local_28 == 0 && local_2c == 0) {
    iVar7 = iVar3 + 0xc0;
    iVar6 = iVar3 + 0x40;
    iVar8 = 0;
    do {
      FUN_02051890(iVar7,iVar6,0x20);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x20;
      iVar6 = iVar6 + 0x20;
    } while (iVar8 < 2);
  }
  DC_FlushRange(iVar3,0x200);
  FUN_02066f64(iVar3,0,0x200);
  FUN_0216589c(iVar3);
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 3;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 3;
  return;
}

