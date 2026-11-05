
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215df50(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_48 [23];
  char local_31 [21];
  char local_1c [28];
  
  pcVar4 = local_48;
  pcVar5 = s_char_jb3ListBack_nsc_l_0216ab40;
  iVar3 = 0x17;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar5 = s_char_ybBgStep2_ncl_l_0216ab10;
  pcVar4 = local_31;
  iVar3 = 0x15;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar5 = s_char_ybBgStep21_ncl_l_0216ab28;
  pcVar4 = local_1c;
  iVar3 = 0x16;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_0400000c = _DAT_0400000c & 0x43 | 0xe18;
  FUN_02154750(s_char_ybObjKb_ncl_l_0216ba18,0x2066ed5);
  FUN_02154750(s_char_jbBgStep2_ncg_l_0216ba2c,&LAB_020669b4_1);
  FUN_02154750(s_char_jbBgStep21_ncg_l_0216ba44,0x20669f9);
  FUN_02154750(local_31,0x2066f65);
  FUN_02154750(s_char_jb3List_nsc_l_0216ba5c,0x2066b91);
  uVar2 = FUN_0215477c(local_48);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *(undefined4 *)(DAT_0216e794 + 8) = uVar2;
  FUN_02161250(*(undefined4 *)(DAT_0216e794 + 8));
  FUN_0216121c();
  uVar2 = FUN_0215477c(local_31);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *(undefined4 *)(DAT_0216e794 + 0xc) = uVar2;
  uVar2 = FUN_0215477c(local_1c);
  uVar2 = FUN_021658c4(uVar2,0,4);
  *(undefined4 *)(DAT_0216e794 + 0x10) = uVar2;
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 3;
  _DAT_04000008 = _DAT_04000008 & 0xfffc | 3;
  _DAT_0400000a = _DAT_0400000a & 0xfffc | 2;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 3;
  _DAT_0400000e = _DAT_0400000e & 0xfffc | 2;
  return;
}

