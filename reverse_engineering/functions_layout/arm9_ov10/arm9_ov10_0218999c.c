
char * FUN_0218999c(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 local_110 [260];
  
  puVar6 = local_110;
  puVar8 = &DAT_021a3528;
  iVar5 = 0x100;
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_021a7d38 = DAT_021a7d38 ^ 1;
  FUN_02004bcc(local_110);
  FUN_02004bcc(local_110,&DAT_021a656c);
  iVar5 = FUN_02004d40(param_1,local_110);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar2 = FUN_02004b04(local_110);
  iVar3 = DAT_021a7d38 * 0x100;
  pcVar7 = &DAT_021a7f40 + iVar3;
  for (pcVar4 = (char *)(iVar5 + iVar2); (*pcVar4 != '\0' && (*pcVar4 != '\\')); pcVar4 = pcVar4 + 1
      ) {
    *pcVar7 = *pcVar4;
    pcVar7 = pcVar7 + 1;
  }
  *pcVar7 = '\0';
  return &DAT_021a7f40 + iVar3;
}

