
uint FUN_02151ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_60;
  int local_5c [4];
  undefined1 auStack_4c [64];
  undefined4 uStack_c;
  
  local_5c[1] = 0;
  local_5c[2] = 3;
  local_5c[3] = 2;
  uStack_c = param_4;
  iVar1 = func_0x021c1fc4(auStack_4c,*(undefined4 *)(param_1 + 0x108c),param_1 + 0x34,0x40,8,
                          local_5c + 1);
  if (iVar1 != 0) {
    local_5c[0] = 0;
    func_0x021c20cc(local_5c,&local_60,1,*(undefined4 *)(param_1 + 0x1090),auStack_4c,
                    param_1 + 0x1044,0xffffffff,0);
    if ((local_5c[0] != 0) && (0xccc < local_60)) {
      return (uint)*(ushort *)(local_5c[0] + 8);
    }
  }
  return 0xffffffff;
}

