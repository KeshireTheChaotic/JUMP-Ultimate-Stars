
/* JUS-GAME JGalaxyPlanet::JGalaxyPlanet_Create [source-string] __FILE__="JGalaxyPlanet.cpp"
   __FUNCTION__="JGalaxyPlanet_Create" lines=[260] passed to 1 source-location call(s) */

undefined4 *
JGalaxyPlanet::JGalaxyPlanet_Create
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar2 = jus_AllocDebug(0x378,s_JGalaxyPlanet_cpp_0215c300,s_JGalaxyPlanet_Create_0215c2e8,0x104);
  puVar3 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_021518b4();
  }
  FUN_021517ac(puVar3,0x378);
  puVar3[0xcc] = param_1;
  uVar4 = FUN_02026f94();
  *puVar3 = uVar4;
  FUN_021517c0(uVar4,puVar3);
  FUN_021517d8(*puVar3);
  FUN_0214d394(param_1);
  FUN_02151c64();
  FUN_02151d4c(puVar3);
  uVar4 = func_0x021ba49c(0,1,1);
  puVar3[0xd0] = uVar4;
  func_0x021bad80(uVar4,0);
  FUN_0215202c(puVar3);
  uVar4 = JGalaxyBackground::JGalaxyBack_Create(puVar3[3],*(undefined1 *)((int)puVar3 + 0x35d));
  puVar3[0xce] = uVar4;
  uVar4 = FUN_021517e8(uVar4,0);
  FUN_0214d678(uVar4,puVar3[2]);
  FUN_0215508c(puVar3);
  if ((*(char *)(puVar3 + 0xd9) == '\0') && (iVar2 = FUN_021517f4(param_1), iVar2 != 0)) {
    FUN_02151804(puVar3 + 0xd1,0x3f800000);
    FUN_021535b0(puVar3);
  }
  else {
    uVar1 = FUN_021517f4(param_1);
    *(undefined1 *)(puVar3 + 0xd8) = uVar1;
    FUN_021517fc(param_1,0);
    FUN_02151804(puVar3 + 0xd1,0x3f19999a);
    FUN_0215327c(puVar3);
    FUN_02154680(puVar3);
  }
  FUN_02151824(puVar3[4],1);
  iVar2 = FUN_02153808(puVar3,*(undefined1 *)(puVar3 + 0xd7));
  uVar4 = puVar3[iVar2 * 10 + 0x36];
  FUN_02151824(uVar4,0);
  FUN_02151824(uVar4,1);
  iVar5 = FUN_021517f4(param_1);
  if (iVar5 == 1) {
    uVar1 = FUN_02151834(puVar3[0xcc]);
    *(undefined1 *)((int)puVar3 + 0x35e) = uVar1;
    iVar5 = FUN_0215183c(puVar3[0xcc],*(undefined1 *)(puVar3 + 0xd7));
    for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar5 + 0x44); iVar7 = iVar7 + 1) {
      uVar6 = FUN_0215184c(puVar3[iVar2 * 10 + iVar7 + 0x37]);
      if (*(byte *)((int)puVar3 + 0x35e) == uVar6) {
        FUN_02151824(puVar3[iVar2 * 10 + iVar7 + 0x37],1);
        break;
      }
    }
  }
  FUN_02151874(auStack_20,0x3f800000);
  FUN_02151858(puVar3[3],auStack_20);
  uVar4 = FUN_02151454(puVar3[3],0x564d5049,0);
  FUN_02151898(uVar4,&DAT_02093c98,0);
  FUN_0214f960(puVar3[2],&DAT_02093c8c);
  uVar4 = FUN_02151454(puVar3[2],0x564d5049,0);
  FUN_02151898(uVar4,&DAT_02093c8c,0);
  thunk_EXT_FUN_021b65bc();
  return puVar3;
}

