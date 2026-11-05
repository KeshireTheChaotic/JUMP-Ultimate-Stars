
void FUN_021a3390(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar3 + 10) = 0;
  *(undefined1 *)(iVar3 + 0xb) = 0;
  *(undefined1 *)(iVar3 + 0xc) = 0;
  do {
    if (*(char *)(iVar3 + 8) != '\0') {
      iVar2 = FUN_0219a93c();
      if (iVar2 == 0) {
        *(undefined1 *)(iVar3 + 0xd) = 0;
      }
      else {
        bVar4 = false;
        iVar2 = FUN_0219a974();
        if (iVar2 == 0) {
          iVar2 = FUN_0219a9cc();
          if (iVar2 != 0) {
            if (iVar2 == 7) {
              bVar4 = (*(byte *)(iVar3 + 8) & 2) != 0;
            }
            else if ((*(byte *)(iVar3 + 8) & 1) != 0) {
              bVar4 = true;
            }
          }
        }
        else {
          bVar4 = *(char *)(iVar3 + 8) != '\0';
        }
        if (bVar4) {
          iVar2 = func_0x0216747c(iVar3);
          if (iVar2 != 0) {
            *(undefined1 *)(iVar3 + 0xd) = 1;
LAB_021a3474:
            FUN_0219a0a4();
            *(undefined1 *)(iVar3 + 10) = 1;
            FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021a3498);
            return;
          }
          *(undefined1 *)(iVar3 + 0xd) = 0;
        }
      }
    }
    cVar1 = *(char *)(iVar3 + 0xb);
    bVar4 = cVar1 != '\0';
    if (!bVar4) {
      cVar1 = *(char *)(iVar3 + 0xc);
    }
    if (bVar4 || cVar1 != '\0') goto LAB_021a3474;
    (*DAT_020a0e18)();
  } while( true );
}

