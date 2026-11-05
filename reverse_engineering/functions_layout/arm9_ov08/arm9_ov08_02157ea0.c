
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02157ea0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_20 [32];
  
  pcVar4 = local_20;
  pcVar5 = s_char_ybBgStep11_ncl_l_0216a8c8;
  iVar3 = 0x16;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_02154750(s_char_jbBgStep1_ncg_l_0216b6b8,0x20669f9);
  FUN_02154750(s_char_jbBgStep1_ncl_l_0216b6d0,0x2066f65);
  FUN_02154750(s_char_jb2Menu_nsc_l_0216b6e8,0x2066c19);
  uVar2 = FUN_0215477c(local_20);
  DAT_0216e724 = FUN_021658c4(uVar2,0,4);
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 3;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 3;
  return;
}

