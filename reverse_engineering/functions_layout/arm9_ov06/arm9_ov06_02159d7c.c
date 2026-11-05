
undefined4 FUN_02159d7c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xf5) != '\0') {
    uVar1 = (*(code *)(&PTR_FUN_02172178)[param_2])();
    if ((*(uint *)(param_1 + 0xc0) & 1 << (uVar1 & 0xff)) != 0) {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0xd || uVar1 == 0xe) {
        iVar2 = FUN_0207834c(*(undefined4 *)(param_1 + 0x1b4),1);
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
      }
      FUN_0215da64(param_1);
      *(char *)(param_1 + 0xca) = (char)uVar1;
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | (&DAT_021712bc)[uVar1 * 3];
      *(undefined1 *)(param_1 + 0xc9) = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
      *(undefined2 *)(iVar2 + 0x24) = 0;
      *(undefined2 *)(iVar2 + 0x26) = 0;
      FUN_02159edc(*(undefined4 *)(param_1 + 0x1a8),1);
      FUN_02157494(param_1,(int)(char)(&DAT_021712c0)[uVar1 * 0xc],FUN_02159ef8,FUN_0215a6ac,0x10,
                   param_4);
      if (uVar1 == 0xc) {
        *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1cc);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x56c);
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) | 0x10;
        *(undefined1 *)(param_1 + 0xd2) = 1;
        *(undefined1 *)(param_1 + 0xd3) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd2) = 0;
      }
      return 1;
    }
  }
  return 0;
}

