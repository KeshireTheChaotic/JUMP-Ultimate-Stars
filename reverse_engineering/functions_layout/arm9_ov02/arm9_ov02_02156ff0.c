
void FUN_02156ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [12];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,1);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  local_148 = 0;
  local_144 = 0xffe00000;
  local_140 = 0xffe00000;
  FUN_0214e39c(auStack_128,&local_140,&local_144,&local_148);
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  FUN_0214e39c(auStack_11c,&local_134,&local_138,&local_13c);
  FUN_0214ef10(auStack_130,uVar4,s_Position_0215c5b0);
  uVar3 = ALControllerImp::Create(auStack_130,0x494c,auStack_11c,auStack_128,0x1000,2);
  FUN_02020f38(uVar4,uVar3);
  thunk_FUN_0207400c(auStack_110,
                     (&PTR_s_jgalaxy_earth01_0215c574)[(uint)*(byte *)(param_1 + 0x24) * 2]);
  thunk_FUN_020741c4(auStack_110,&DAT_0215c5bc);
  FUN_02156cc4(*(undefined4 *)(param_1 + 0xc),0);
  FUN_02034db8();
  uVar3 = FUN_02156c8c();
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Load(uVar3,auStack_110,0x80);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}

