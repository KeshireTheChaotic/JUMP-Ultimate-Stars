
void FUN_021619b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  DAT_020afee4 = 1;
  uVar2 = 0;
  DAT_020aff28 = 0;
  if (0 < DAT_020aff27) {
    for (; (int)uVar2 < (int)DAT_020aff27; uVar2 = uVar2 + 1) {
      uVar3 = (uint)(byte)(&DAT_020b4084)[DAT_020b4114];
      bVar5 = (uVar3 & 1 << (uVar2 & 0xff)) == 0;
      if (bVar5) {
        uVar3 = (uint)(byte)(&DAT_020aff29)[uVar2];
      }
      if (bVar5 && uVar3 == 0) {
        DAT_020aff28 = DAT_020aff28 | (byte)(1 << (uVar2 & 0xff));
      }
    }
  }
  DAT_020afeee = 0xc;
  if ((int *)puVar4[0xb] != (int *)0x0) {
    (**(code **)(*(int *)puVar4[0xb] + 0xc))();
  }
  if (puVar4[1] != 0) {
    func_0x021bab64();
    puVar4[1] = 0;
  }
  if (puVar4[7] != 0) {
    FUN_02158e20();
    puVar4[7] = 0;
  }
  if (puVar4[6] != 0) {
    FUN_0214fa38();
    puVar4[6] = 0;
  }
  FUN_0207698c(puVar4[4]);
  FUN_020763e0(puVar4[3]);
  func_0x021bd500(*puVar4);
  FUN_0206bac8(puVar4[2]);
  FUN_0207120c(4,1);
  FUN_0207120c(0x10,1);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar4[0xc] + 4) + 0xc))();
  (**(code **)(*(int *)puVar4[0xd] + 8))();
  FUN_0201b244(puVar4);
  func_0x021b65cc();
  return;
}

