
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201aa9c(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if (DAT_020a0e50 <= uVar5) {
LAB_0201ab4c:
      uVar5 = *param_1;
      uVar3 = param_2 + 0x3fU & 0xffffffe0;
      iVar4 = *(int *)(uVar5 - 0x14);
      if (*(uint *)(uVar5 - 0x10) == uVar3) {
        if (DAT_020a0c35 != '\0') {
          _DAT_04000208 = *(undefined2 *)(iVar4 + 0x49c);
        }
        return;
      }
      uVar1 = *(uint *)(uVar5 - 0x10) - uVar3;
      if (uVar1 < 0x20) {
        if (DAT_020a0c35 != '\0') {
          _DAT_04000208 = *(undefined2 *)(iVar4 + 0x49c);
        }
        return;
      }
      *(uint *)(iVar4 + 0x410) = *(int *)(iVar4 + 0x410) + uVar1;
      iVar2 = *(int *)(uVar5 - 0x10);
      *(uint *)(uVar5 - 0x10) = uVar3;
      FUN_0201a31c(iVar4,(uVar5 - 0x20) + uVar3,iVar2 - uVar3);
      if (DAT_020a0c35 != '\0') {
        _DAT_04000208 = *(undefined2 *)(iVar4 + 0x49c);
      }
      return;
    }
    FUN_0201a548((&DAT_020a1680)[uVar5]);
    uVar3 = (&DAT_020a1680)[uVar5];
    if (((uVar3 != 0) && (uVar1 = *param_1, uVar3 < uVar1)) && (uVar1 < *(uint *)(uVar3 + 0x4a4))) {
      if (*(uint *)(uVar3 + 0x4a8) <= uVar1) {
        FUN_0201a57c();
        uVar5 = jus_AllocDebug(param_2);
        FUN_02051890(*param_1,uVar5,param_2);
        uVar3 = *param_1;
        iVar4 = FUN_0201a9ec(uVar3);
        if (iVar4 == 0) {
          FUN_0201a958(uVar3,1);
        }
        *param_1 = uVar5;
        return;
      }
      goto LAB_0201ab4c;
    }
    FUN_0201a57c();
    uVar5 = uVar5 + 1;
  } while( true );
}

