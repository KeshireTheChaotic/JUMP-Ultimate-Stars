
int FUN_0218df48(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int local_34;
  int local_30;
  char local_20 [4];
  int local_1c;
  undefined2 local_18 [2];
  
  lVar5 = FUN_0200d10c(DAT_021a8560,DAT_021a8564,DAT_021a8558,DAT_021a855c);
  lVar5 = lVar5 + CONCAT44(DAT_021a856c,DAT_021a8568);
  DAT_021a8558 = (undefined4)lVar5;
  DAT_021a855c = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_18[0] = (undefined2)((ulonglong)lVar5 >> 0x30);
  lVar5 = FUN_0200d10c(DAT_021a8560,DAT_021a8564);
  lVar5 = lVar5 + CONCAT44(DAT_021a856c,DAT_021a8568);
  DAT_021a8558 = (undefined4)lVar5;
  DAT_021a855c = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_18[1] = (undefined2)((ulonglong)lVar5 >> 0x30);
  iVar1 = FUN_0218e074(param_1,&local_1c);
  if (iVar1 != 0) {
    return local_1c;
  }
  local_20[0] = '\x01';
  local_20[1] = 1;
  local_34 = 0;
  local_30 = 0;
  do {
    pcVar3 = local_20;
    puVar2 = local_18;
    puVar4 = &DAT_021a8550;
    iVar1 = local_30;
    do {
      if (*pcVar3 != '\0') {
        local_1c = FUN_0218e028(param_1,*puVar4,*puVar2);
        if ((local_1c != 0) && (local_1c != -1)) goto LAB_0218e00a;
        if (local_1c == -1) {
          *pcVar3 = '\0';
        }
      }
      pcVar3 = pcVar3 + 1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    local_34 = local_34 + 1;
  } while (local_34 < 3);
LAB_0218e00a:
  if (local_1c == -1) {
    local_1c = 0;
  }
  return local_1c;
}

