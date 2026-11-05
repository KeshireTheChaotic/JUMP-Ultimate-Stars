
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d28c(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = false;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = 0;
  *(char *)(iVar3 + 0x1c) = (char)param_3;
  puVar4 = &DAT_0215d29c;
  do {
    if ((char)(&DAT_0215d29c)[iVar2] < '\0') {
LAB_0214d2cc:
      if (!bVar1) {
        puVar4 = (undefined1 *)(uint)*(byte *)(iVar3 + 0x1f);
      }
      if (!bVar1 && puVar4 == (undefined1 *)0x0) {
        if ((int)param_4 < 0) {
          if (param_3 == 0) {
            if (param_2 == 1) {
              *(undefined1 *)(iVar3 + 0x1d) = 0;
            }
            if (param_2 == 2) {
              *(undefined1 *)(iVar3 + 0x1d) = 1;
            }
          }
          if (param_3 == 1 && param_2 == 0x18) {
            *(undefined1 *)(iVar3 + 0x1d) = 4;
          }
        }
        else {
          *(char *)(iVar3 + 0x1d) = (char)param_4;
        }
        _DAT_021d514c = FUN_0214d1b0;
      }
      else {
        if ((param_3 == 2 || param_3 == 0x18) || param_3 == 0x10) {
          *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 4;
        }
        if (*(byte *)(iVar3 + 0x1f) != 0) {
          if (param_3 == 0x21) {
            param_3 = 0;
          }
          if ((int)param_4 < 0) {
            param_4 = 0;
          }
        }
        DAT_020afcb8 = (uint)*(byte *)(iVar3 + 0x1f) << 0x18 | param_3 << 0x10 |
                       (param_4 & 0xff) << 8 | param_2;
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214cff8);
      return;
    }
    if (param_3 == (byte)(&DAT_0215d29c)[iVar2]) {
      bVar1 = true;
      goto LAB_0214d2cc;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

