
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215fb14(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_20 [32];
  
  pcVar4 = local_20;
  pcVar5 = s_char_ybBgStep11_ncl_l_0216abb4;
  iVar3 = 0x16;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_02154750(s_char_ybObjWay_ncl_l_0216bb90,0x2066ed5);
  FUN_02154750(s_char_jbBgStep1_ncg_l_0216bba4,0x20669f9);
  FUN_02154750(s_char_jbBgStep1_ncl_l_0216bbbc,0x2066f65);
  FUN_02154750(s_char_jb2Ap_nsc_l_0216bbd4,0x2066c19);
  uVar2 = FUN_0215477c(local_20);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *DAT_0216e7b4 = uVar2;
  FUN_02166adc(1,0x10);
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 3;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 3;
  return;
}

