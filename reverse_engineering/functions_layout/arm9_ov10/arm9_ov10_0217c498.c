
void FUN_0217c498(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_1bc [256];
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  char local_b5 [161];
  
  iVar6 = 7;
  local_bc = 8;
  local_bb = 10;
  local_ba = 0x32;
  local_b9 = 0x33;
  local_b8 = 0x34;
  local_b7 = 0x35;
  local_b6 = 0x36;
  iVar1 = FUN_02178448();
  if ((*(char *)(iVar1 + 0x15) == '\0') ||
     (iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x15) == '\x01')) {
    iVar1 = 0;
    pcVar5 = &DAT_021a75d8;
    pcVar4 = local_b5;
    do {
      if (*pcVar5 != '\0') {
        *pcVar4 = *pcVar5;
        pcVar4 = pcVar4 + 1;
        iVar6 = iVar6 + 1;
      }
      pcVar5 = pcVar5 + 0xc;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x9a);
  }
  iVar1 = FUN_02178448();
  if (*(uint *)(iVar1 + 0x198) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(iVar1 + 0x198)) {
    case 3:
      iVar1 = FUN_02178448();
      if (*(int *)(iVar1 + 0x200) == 0) {
        iVar1 = FUN_02178448();
        iVar3 = FUN_02178448();
        iVar2 = FUN_02178448();
        FUN_0217c454(auStack_1bc,*(undefined4 *)(iVar1 + 0x1f8),*(undefined1 *)(iVar3 + 0x16),
                     *(undefined1 *)(iVar2 + 0x15));
        if (DAT_021a75b4 != 0) {
          FUN_02052c44(auStack_1bc,0x100,s__s_and___s__021a4c08,auStack_1bc,DAT_021a75b4);
        }
        break;
      }
      iVar1 = FUN_02178448();
      param_1 = *(undefined4 *)(iVar1 + 0x200);
    case 2:
      FUN_02052c44(auStack_1bc,0x100,s__s____u_021a4c14,s_dwc_pid_021a4b44,param_1);
      iVar1 = FUN_02178448();
      *(undefined4 *)(iVar1 + 0x1fc) = param_1;
    }
  }
  iVar1 = FUN_02178448();
  FUN_0217fc10(*(undefined4 *)(iVar1 + 0xe4));
  iVar1 = 0;
  while( true ) {
    iVar3 = FUN_02178448();
    iVar3 = FUN_0217fcdc(*(undefined4 *)(iVar3 + 0xe4),1,0,&local_bc,iVar6,auStack_1bc,6);
    if (iVar3 == 0) {
      return;
    }
    if (iVar3 != 2) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return;
    }
  }
  return;
}

