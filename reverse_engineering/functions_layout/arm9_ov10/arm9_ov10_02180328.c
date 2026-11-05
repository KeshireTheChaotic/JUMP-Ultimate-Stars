
int FUN_02180328(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (2 < *(int *)(param_1 + 0x80)) {
    while( true ) {
      uVar1 = **(ushort **)(param_1 + 0x7c) >> 8 | **(ushort **)(param_1 + 0x7c) << 8;
      uVar3 = (uint)uVar1;
      if (0x1000 < uVar3) break;
      if (*(int *)(param_1 + 0x80) < (int)uVar3) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x7c);
      switch(*(undefined1 *)(iVar2 + 2)) {
      case 1:
        iVar4 = FUN_02180790(param_1,iVar2 + 3,uVar3 - 3);
        break;
      case 2:
        iVar4 = FUN_0218046c(param_1,iVar2 + 3,uVar3 - 3);
        break;
      case 3:
        iVar2 = FUN_02001a88(*(undefined4 *)(param_1 + 0x4b0),iVar2,uVar3,0);
        if (iVar2 < 1) {
          return 3;
        }
        break;
      case 4:
        iVar4 = FUN_02180510(param_1,iVar2 + 3,uVar3 - 3);
        break;
      case 5:
        iVar4 = FUN_02180560(param_1,iVar2 + 3,uVar3 - 3);
        break;
      case 6:
        iVar4 = FUN_02180660(param_1,iVar2 + 3,uVar3 - 3);
      }
      *(uint *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) - (uint)uVar1;
      if (*(int *)(param_1 + 0x80) < 0) {
        FUN_02002068(s_slist_>inbufferlen_>__0_021a4cd8,s_sb_serverlist_c_021a4cf0,0,0x5b4);
      }
      if ((*(int *)(param_1 + 0x80) != 0) && (iVar2 = *(int *)(param_1 + 0x7c), iVar2 != 0)) {
        FUN_02002450(iVar2,iVar2 + (uint)uVar1);
      }
      if ((iVar4 != 0) || (*(int *)(param_1 + 0x80) < 3)) goto LAB_02180444;
    }
    iVar4 = 4;
  }
LAB_02180444:
  if (iVar4 != 0) {
    FUN_0218154c(param_1);
  }
  return iVar4;
}

