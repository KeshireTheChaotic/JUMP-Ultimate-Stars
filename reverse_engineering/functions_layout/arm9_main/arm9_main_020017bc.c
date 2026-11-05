
void FUN_020017bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
                    /* JUS-TAG strings=["%02x"] */
  uVar2 = 0;
  iVar1 = 0;
  do {
    FUN_02003ce0(param_2 + iVar1,&DAT_02092fd4,*(undefined1 *)(param_1 + uVar2));
    iVar1 = iVar1 + 2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

