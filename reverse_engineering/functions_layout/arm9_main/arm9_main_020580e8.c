
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_020580e8(undefined2 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  puVar1 = (undefined2 *)FUN_020581a0();
  if (puVar1 == (undefined2 *)0x0) {
    return 8;
  }
  *puVar1 = param_1;
  puVar2 = &uStack_c;
  iVar3 = 0;
  if ((uStack_c & 0xffff) != 0) {
    do {
      puVar2 = puVar2 + 1;
      iVar5 = iVar3 + 1;
      *(uint *)(puVar1 + iVar3 * 2 + 2) = *puVar2;
      iVar3 = iVar5;
    } while (iVar5 < (int)(uStack_c & 0xffff));
  }
  DC_StoreRange(puVar1,0x100);
  iVar3 = FUN_020557c8(10,puVar1,0);
  FUN_02053c84(&DAT_020acaec,puVar1,1);
  if (iVar3 < 0) {
    uVar4 = 8;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}

