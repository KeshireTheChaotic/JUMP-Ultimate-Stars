
/* JUS-GAME PassMark::PassMark_Create [source-string] __FILE__="PassMark.cpp"
   __FUNCTION__="PassMark_Create" lines=[71] passed to 1 source-location call(s) */

int * PassMark::PassMark_Create(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  piVar1 = (int *)thunk_FUN_0201a228(0x1098,s_PassMark_cpp_02160f94,&DAT_02160f84,0x47);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_020517fc(piVar1,0,0x1098);
    iVar2 = FUN_02026f94();
    *piVar1 = iVar2;
    local_10 = 0x80000;
    (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
    (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
    FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02151b88);
    FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
    iVar2 = FUN_020208ec(0);
    piVar1[1] = iVar2;
    piVar1[2] = (int)&DAT_02151b84;
    iVar2 = FUN_0215178c(s_opening_PassMark_bin_02160fa4,0,0);
    piVar1[4] = iVar2;
    iVar2 = FUN_0215178c(FUN_02160fbc,0,0);
    piVar1[5] = iVar2;
    iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x2c))(*(int **)(iVar2 + 4),0);
    piVar1[6] = iVar2;
    piVar1[10] = iVar2 + 0x14;
    piVar1[0xb] = *(int *)piVar1[6];
    piVar1[8] = piVar1[10] + *(int *)piVar1[6] * 4;
    piVar1[9] = *(int *)(piVar1[6] + 8);
    piVar1[0xc] = *(int *)(piVar1[6] + 0x10);
    piVar1[7] = *(int *)(piVar1[6] + 8) * 0x18 + piVar1[8];
    func_0x021c1668();
    func_0x021c20a0(piVar1 + 8,0xffffffff,0,0);
    iVar2 = FUN_02151bcc();
    piVar1[0x410] = iVar2;
    iVar2 = func_0x021c2024(piVar1 + 0x411,piVar1[0x410],piVar1 + 8,0xffffffff,0,0);
    if (iVar2 == 0) {
      FUN_021517b8(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      func_0x021c201c(0x40,8);
      iVar2 = FUN_02151bcc();
      piVar1[0x423] = iVar2;
      func_0x021c2484(0x40,8,piVar1 + 0x411,0);
      iVar2 = FUN_02151bcc();
      piVar1[0x424] = iVar2;
      piVar1[0xd] = (int)(piVar1 + 0x10);
      piVar1[0xf] = 0x400;
      piVar1[0xe] = 0;
    }
  }
  return piVar1;
}

