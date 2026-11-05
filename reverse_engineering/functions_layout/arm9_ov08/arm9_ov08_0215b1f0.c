
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b1f0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_38 [25];
  char local_1f [31];
  
  pcVar4 = local_38;
  pcVar5 = s_char_xb4ApListBack_nsc_l_0216a984;
  iVar3 = 0x19;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar5 = s_char_ybBgStep31_ncl_l_0216a96c;
  pcVar4 = local_1f;
  iVar3 = 0x16;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_02154750(s_char_jb4ApList_nsc_l_0216b8c4,0x2066b91);
  uVar2 = FUN_0215477c(local_38);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *(undefined4 *)(DAT_0216e774 + 4) = uVar2;
  FUN_02161250(*(undefined4 *)(DAT_0216e774 + 4));
  FUN_0216121c();
  uVar2 = FUN_0215477c(local_1f);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *(undefined4 *)(DAT_0216e774 + 8) = uVar2;
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_04000008 = _DAT_04000008 & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 2;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 3;
  _DAT_0400000e = _DAT_0400000e & 0xfffc | 2;
  return;
}

